//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoProcessFilter.h"

@interface VideoProcessCustomizedFilter : VideoProcessFilter
{
    struct GPUMatrix4x4 _colorMatrix;
    struct GPUVector4 _colorOffset;
    int _colorMatrixUniform;
    int _colorOffsetUniform;
}

- (void)setUniforms:(int)arg1;
- (void)initUniforms:(unsigned int)arg1;
- (int)setColorMatrix:(int)arg1;
- (id)init;

@end

