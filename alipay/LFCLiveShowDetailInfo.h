//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFCLiveShowInfo.h"

@class LFCActivityDiscountBriefInfo, NSArray;

@interface LFCLiveShowDetailInfo : LFCLiveShowInfo
{
    NSArray *_feedList;
    LFCActivityDiscountBriefInfo *_discount;
}

+ (Class)feedListElementClass;
@property(retain, nonatomic) LFCActivityDiscountBriefInfo *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSArray *feedList; // @synthesize feedList=_feedList;
- (void).cxx_destruct;

@end

