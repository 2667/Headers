//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSCardListDataContainer.h"

@class TBSNSShopListEmptyData;

@interface TBSNSShopSearchFeedDataContainer : TBSNSCardListDataContainer
{
    TBSNSShopListEmptyData *_headerFeeds;
}

@property(retain, nonatomic) TBSNSShopListEmptyData *headerFeeds; // @synthesize headerFeeds=_headerFeeds;
- (void).cxx_destruct;
- (id)getDataAtIndex:(long long)arg1;
- (long long)getDataCount;
- (id)init;

@end
