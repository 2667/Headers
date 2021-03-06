//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface FMSpriteInterChangeFilter : GPUImageFilter
{
    struct Sprite2dInterChangeMultiple *_sprite;
    vector_183f810f _faceData;
    Vec_08cf5610 _resizing;
    _Bool _shouldMirrorFaceKeyPoints;
    _Bool _shouldTrackFace;
    double _lastFrameTime;
    struct CGSize _canvasSize;
    struct CGSize _spriteSize;
    struct CGSize _spriteElemSize;
}

+ (id)create:(struct CGSize)arg1 spriteSize:(struct CGSize)arg2 spriteElemSize:(struct CGSize)arg3 frames:(struct FrameTexture *)arg4 frameCount:(int)arg5;
@property(nonatomic) struct CGSize spriteElemSize; // @synthesize spriteElemSize=_spriteElemSize;
@property(nonatomic) struct CGSize spriteSize; // @synthesize spriteSize=_spriteSize;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(nonatomic) double lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
@property(nonatomic) _Bool shouldTrackFace; // @synthesize shouldTrackFace=_shouldTrackFace;
@property(nonatomic) _Bool shouldMirrorFaceKeyPoints; // @synthesize shouldMirrorFaceKeyPoints=_shouldMirrorFaceKeyPoints;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateWithFaceFeatures:(id)arg1 filterEnable:(_Bool)arg2;
- (struct Sprite2dInterChangeMultiple *)sprite;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)reset;
- (void)setResizing:(Vec_08cf5610)arg1;
- (Vec_08cf5610 *)getResizing;
- (_Bool)setDisplayMode:(id)arg1;
- (vector_183f810f *)faceData;
- (void)setFPS:(double)arg1;
- (_Bool)setSpriteFrames:(struct FrameTexture *)arg1 frameCount:(int)arg2;
- (void)dealloc;
- (id)initWithCanvasSize:(struct CGSize)arg1 spriteSize:(struct CGSize)arg2 spriteElemSize:(struct CGSize)arg3;

@end

