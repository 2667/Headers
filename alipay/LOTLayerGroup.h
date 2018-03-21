//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSNumber;

@interface LOTLayerGroup : NSObject
{
    struct CGRect _bounds;
    NSNumber *_framerate;
    NSDictionary *_modelMap;
    NSDictionary *_referenceIDMap;
    NSArray *_layers;
}

@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void).cxx_destruct;
- (id)layerForReferenceID:(id)arg1;
- (id)layerModelForID:(id)arg1;
- (void)_mapFromJSON:(id)arg1 withAssetGroup:(id)arg2;
- (id)initWithLayerJSON:(id)arg1 withBounds:(struct CGRect)arg2 withFramerate:(id)arg3 withAssetGroup:(id)arg4;

@end
