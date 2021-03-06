//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBCustomModalViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIView, WBPage;

@interface WBPageDetailViewController : WBTableViewController <WBCustomModalViewDelegate>
{
    _Bool canRemark;
    NSString *remarkString;
    _Bool _loading;
    _Bool _rightNavigationItemHasSet;
    NSMutableArray *_pageDetails;
    WBPage *_page;
    NSString *_navigationItemTitle;
    UIView *_listIndicatorView;
    NSString *_rightNavigationItemScheme;
    unsigned long long _rightNavigationItemType;
}

@property(retain, nonatomic) NSString *remarkString; // @synthesize remarkString;
@property(nonatomic) unsigned long long rightNavigationItemType; // @synthesize rightNavigationItemType=_rightNavigationItemType;
@property(retain, nonatomic) NSString *rightNavigationItemScheme; // @synthesize rightNavigationItemScheme=_rightNavigationItemScheme;
@property(nonatomic) _Bool rightNavigationItemHasSet; // @synthesize rightNavigationItemHasSet=_rightNavigationItemHasSet;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIView *listIndicatorView; // @synthesize listIndicatorView=_listIndicatorView;
@property(retain, nonatomic) NSString *navigationItemTitle; // @synthesize navigationItemTitle=_navigationItemTitle;
@property(retain, nonatomic) WBPage *page; // @synthesize page=_page;
@property(retain, nonatomic) NSMutableArray *pageDetails; // @synthesize pageDetails=_pageDetails;
- (void).cxx_destruct;
- (void)modalView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)modalView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (_Bool)tableViewIsLoading:(id)arg1;
- (void)openMailToScheme:(id)arg1;
- (void)openPhoneNumberScheme:(id)arg1;
- (id)contentWithoutScheme:(id)arg1 fromURLString:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)configIfNeed:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)contentLinkAtIndexPath:(id)arg1;
- (id)contentTextAtIndexPath:(id)arg1;
- (id)titleTextAtIndexPath:(id)arg1;
- (id)rowDictAtIndexPath:(id)arg1;
- (id)rowDictsAtSection:(long long)arg1;
- (id)sectionHeaderTitleForSection:(long long)arg1;
- (id)stringForKey:(id)arg1 inDictionary:(id)arg2;
- (void)showLoadingIndicatorView;
- (void)removeRemarkSection:(id)arg1;
- (void)moreButtonPressed:(id)arg1;
- (void)finishedLoadingData;
- (void)configRemark:(id)arg1;
- (void)loadDetails;
- (void)rightNavigationItemPressed:(id)arg1;
- (void)viewDidUnload;
- (void)dismissPresent;
- (void)addDefaultLeftBarWhenPresented;
- (void)viewDidLoad;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

