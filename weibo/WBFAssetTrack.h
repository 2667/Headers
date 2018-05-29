//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBFAVAssetTrack-Protocol.h"

@class NSString;
@protocol WBFAVAsset;

@interface WBFAssetTrack : NSObject <WBFAVAssetTrack>
{
    float _estimatedDataRate;
    id <WBFAVAsset> _asset;
    NSString *_mediaType;
    struct CGSize _naturalSize;
}

@property(nonatomic) struct CGSize naturalSize; // @synthesize naturalSize=_naturalSize;
@property(nonatomic) float estimatedDataRate; // @synthesize estimatedDataRate=_estimatedDataRate;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) __weak id <WBFAVAsset> asset; // @synthesize asset=_asset;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

