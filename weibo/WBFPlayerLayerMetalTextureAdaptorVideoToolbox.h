//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBFPlayerLayerMetalTextureAdaptor-Protocol.h"

@class NSArray, NSString;
@protocol MTLDevice, MTLRenderPipelineState;

@interface WBFPlayerLayerMetalTextureAdaptorVideoToolbox : NSObject <WBFPlayerLayerMetalTextureAdaptor>
{
    float _rotationDegrees;
    float _widthScaleFactor;
    id <MTLRenderPipelineState> _renderPipelineState;
    NSArray *_textures;
    long long _colorConversionType;
    id <MTLDevice> _device;
    struct __CVMetalTextureCache *_textureCache;
}

@property(nonatomic) struct __CVMetalTextureCache *textureCache; // @synthesize textureCache=_textureCache;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) float widthScaleFactor; // @synthesize widthScaleFactor=_widthScaleFactor;
@property(readonly, nonatomic) float rotationDegrees; // @synthesize rotationDegrees=_rotationDegrees;
@property(readonly, nonatomic) long long colorConversionType; // @synthesize colorConversionType=_colorConversionType;
@property(readonly, nonatomic) NSArray *textures; // @synthesize textures=_textures;
@property(readonly, nonatomic) id <MTLRenderPipelineState> renderPipelineState; // @synthesize renderPipelineState=_renderPipelineState;
- (void).cxx_destruct;
- (long long)updateWithOverlay:(struct SDL_VoutOverlay *)arg1 commandBuffer:(id)arg2 texturePixelSize:(struct CGSize)arg3;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

