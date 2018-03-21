//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMHairClipFilter.h"

@class NSArray, NSString;

@interface FMHairClipFilterWithAnim2d : FMHairClipFilter
{
    struct Sprite2dInterChangeMultipleWithBlend *_spriteBlend;
    struct Sprite2dInterChangeMultiple *_sprite;
    int _spriteCol;
    int _spriteRow;
    _Bool _useTransparent;
    NSString *_vshDrawMask;
    NSString *_fshDrawMask;
    double _lastFrameTime;
    NSArray *_additionalTextures;
    struct CGSize _canvasSize;
    struct CGSize _spriteSize;
    struct CGSize _spriteElemSize;
}

@property(retain, nonatomic) NSArray *additionalTextures; // @synthesize additionalTextures=_additionalTextures;
@property(nonatomic) struct CGSize spriteElemSize; // @synthesize spriteElemSize=_spriteElemSize;
@property(nonatomic) struct CGSize spriteSize; // @synthesize spriteSize=_spriteSize;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(nonatomic) double lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
- (void).cxx_destruct;
- (struct Sprite2dInterChangeMultiple *)sprite;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)enableTransparent:(_Bool)arg1;
- (_Bool)setDisplayMode:(id)arg1;
- (void)setFPS:(double)arg1;
- (void)setAdditionalMaskTextures:(id)arg1 loadImageCallback:(CDUnknownBlockType)arg2;
- (_Bool)setSpriteFrames:(struct FrameTexture *)arg1 frameCount:(int)arg2;
- (const char *)getFragmentShaderString;
- (const char *)getVertexShaderString;
- (void)dealloc;
- (id)initWithCanvasSize:(struct CGSize)arg1 spriteSize:(struct CGSize)arg2 spriteElemSize:(struct CGSize)arg3 metal:(id)arg4 model:(id)arg5 blendMode:(int)arg6 shaders:(id)arg7;

@end
