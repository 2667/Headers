//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@class FMTimeCharacterTPResource, NSDateFormatter, NSDictionary;

@interface FMTimeCharacterTPFilter : GPUImageFilter
{
    unsigned int timeImageId;
    int timeImageLocation;
    int timeHScaleLocation;
    int timeCharacterCountLocation;
    int timeCharacterMapCountLocation;
    int characterIndexsLocation;
    int characterResScaleLocation;
    int timeAnchorLocation;
    int *characterIndexs;
    NSDateFormatter *_dateFormat;
    FMTimeCharacterTPResource *_timeResource;
    NSDictionary *_characterDic;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (id)initWithTimeCharacterResource:(id)arg1;

@end
