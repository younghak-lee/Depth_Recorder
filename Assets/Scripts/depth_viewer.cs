using System.Collections;
using System.Collections.Generic;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine;

public class depth_viewer : MonoBehaviour
{
    const string k_MaxDistanceName = "_MaxDistance";
    const string k_DisplayRotationPerFrameName = "_DisplayRotationPerFrame";
    static readonly int k_MaxDistanceId = Shader.PropertyToID(k_MaxDistanceName);
    static readonly int k_DisplayRotationPerFrameId = Shader.PropertyToID(k_DisplayRotationPerFrameName);
    Matrix4x4 m_DisplayRotationMatrix = Matrix4x4.identity;

    public AROcclusionManager m_OcclusionManager;
    public Material depth_material;
    public RenderTexture rt;

    public float MaxDistance = 4;

    // Start is called before the first frame update
    void Start()
    {
        depth_material.SetFloat(k_MaxDistanceId, MaxDistance);
        depth_material.SetMatrix(k_DisplayRotationPerFrameId, m_DisplayRotationMatrix);
        
    }

    // Update is called once per frame
    void Update()
    {
        Texture2D envDepth = m_OcclusionManager.environmentDepthTexture;
        Graphics.Blit(envDepth, rt, depth_material);
    }
}
