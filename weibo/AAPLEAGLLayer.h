//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAEAGLLayer.h>

@class EAGLContext, NSLock;

@interface AAPLEAGLLayer : CAEAGLLayer
{
    _Bool _mDisableRender;
    NSLock *_mlock;
    int _mScalingMode;
    int _mRotate;
    int _backingWidth;
    int _backingHeight;
    int sar_width;
    int sar_height;
    EAGLContext *_context;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    unsigned int _frameBufferHandle;
    unsigned int _colorBufferHandle;
    const float *_preferredConversion;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    unsigned int _program;
    struct __CVBuffer *_pixelBuffer;
    struct __CVBuffer *_lastpixelBuffer;
}

@property unsigned int program; // @synthesize program=_program;
@property struct __CVBuffer *lastpixelBuffer; // @synthesize lastpixelBuffer=_lastpixelBuffer;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)validateProgram:(unsigned int)arg1;
- (_Bool)linkProgram:(unsigned int)arg1;
- (_Bool)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 URL:(id)arg3;
- (_Bool)compileShaderString:(unsigned int *)arg1 type:(unsigned int)arg2 shaderString:(const char *)arg3;
- (_Bool)loadShaders;
- (void)cleanUpTextures;
- (void)resetRenderBuffer;
- (void)releaseBuffers;
- (void)createBuffers;
- (void)setupBuffers;
- (void)setupGL;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)renderLastFrame;
- (void)setScalingMode:(int)arg1;
- (void)setRenderRotate:(int)arg1;
- (void)clear;
- (void)setSarWidthHeight:(int)arg1 height:(int)arg2;
- (id)snapshot;
- (id)imageFromCVPixelBufferRef0:(struct __CVBuffer *)arg1;

@end

