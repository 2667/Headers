//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface WBMediaAssetExtraData : NSObject
{
    unsigned long long _mediaExtraTypes;
    NSDictionary *_additionalMetaData;
}

@property(readonly, copy, nonatomic) NSDictionary *additionalMetaData; // @synthesize additionalMetaData=_additionalMetaData;
@property(readonly, nonatomic) unsigned long long mediaExtraTypes; // @synthesize mediaExtraTypes=_mediaExtraTypes;
- (void).cxx_destruct;
- (id)initWithExtraTypes:(unsigned long long)arg1 additionalMetaData:(id)arg2;

@end

