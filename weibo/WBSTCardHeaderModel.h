//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSArray, NSString, WBSTCardHeaderMediaInfo, WBStoryAggregateShareInfo, WBStoryUser;

@interface WBSTCardHeaderModel : WBModelObject
{
    NSString *_itemID;
    NSString *_nickName;
    long long _useConut;
    NSString *_btnText;
    NSString *_btnScheme;
    NSString *_desc;
    long long _headerStyleType;
    WBSTCardHeaderMediaInfo *_mediaInfo;
    WBStoryAggregateShareInfo *_shareInfo;
    WBStoryUser *_sponsor;
    NSArray *_adInfos;
    NSString *_subSponsorName;
}

@property(copy, nonatomic) NSString *subSponsorName; // @synthesize subSponsorName=_subSponsorName;
@property(retain, nonatomic) NSArray *adInfos; // @synthesize adInfos=_adInfos;
@property(retain, nonatomic) WBStoryUser *sponsor; // @synthesize sponsor=_sponsor;
@property(retain, nonatomic) WBStoryAggregateShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) WBSTCardHeaderMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
@property(nonatomic) long long headerStyleType; // @synthesize headerStyleType=_headerStyleType;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *btnScheme; // @synthesize btnScheme=_btnScheme;
@property(copy, nonatomic) NSString *btnText; // @synthesize btnText=_btnText;
@property(nonatomic) long long useConut; // @synthesize useConut=_useConut;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)activityAd;
- (id)displayedAd;
- (_Bool)updateWithDictionary:(id)arg1;

@end

