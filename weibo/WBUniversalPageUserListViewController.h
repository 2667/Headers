//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"

@class NSMutableArray, NSString, WBPRLMTableViewWrapper, WBPage, WBPageCard;

@interface WBUniversalPageUserListViewController : WBTableViewController <PRLMTableViewWrapperDelegate>
{
    NSMutableArray *pagePeople;
    WBPRLMTableViewWrapper *prlmWrapper;
    WBPageCard *pageCard;
    long long pageNumber;
    long long count;
    long long maxCount;
    NSString *pageCardTitle;
    _Bool hasGetTitle;
    _Bool _rightNavigationItemHasSet;
    WBPage *_page;
    NSString *_rightNavigationItemScheme;
    unsigned long long _rightNavigationItemType;
    NSString *cardID;
    NSString *pageID;
}

@property(retain, nonatomic) NSString *pageID; // @synthesize pageID;
@property(retain, nonatomic) NSString *cardID; // @synthesize cardID;
@property(nonatomic) unsigned long long rightNavigationItemType; // @synthesize rightNavigationItemType=_rightNavigationItemType;
@property(retain, nonatomic) NSString *rightNavigationItemScheme; // @synthesize rightNavigationItemScheme=_rightNavigationItemScheme;
@property(nonatomic) _Bool rightNavigationItemHasSet; // @synthesize rightNavigationItemHasSet=_rightNavigationItemHasSet;
@property(retain, nonatomic) WBPage *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *pageCardTitle; // @synthesize pageCardTitle;
@property(nonatomic) long long count; // @synthesize count;
@property(retain, nonatomic) WBPageCard *pageCard; // @synthesize pageCard;
@property(retain, nonatomic) NSMutableArray *pagePeople; // @synthesize pagePeople;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (id)fID;
- (void)moreButtonPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)rightNavigationItemPressed:(id)arg1;
- (void)viewDidUnload;
- (void)finishLoadingData;
- (void)loadPagePeople;
- (void)configurationPageSizeAndPageNumber;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithPageCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

