//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "WBHealthMedalCardCellDelegate-Protocol.h"
#import "WBHealthMedalDetailControllerDelegate-Protocol.h"

@class NSArray, NSString, SNHTTPRequestOperationWrapper;

@interface WBHealthMedalBaseViewController : WBTableViewController <WBHealthMedalCardCellDelegate, WBHealthMedalDetailControllerDelegate>
{
    SNHTTPRequestOperationWrapper *_loadRequest;
    NSArray *_medalGroups;
    NSString *_caches;
    struct {
        unsigned int pendingRecentMedalPresent:1;
        unsigned int tableViewNeedsReload:1;
    } _flags;
    NSString *_uid;
    NSString *_recentIssuedMedalID;
}

@property(retain, nonatomic) NSString *recentIssuedMedalID; // @synthesize recentIssuedMedalID=_recentIssuedMedalID;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (void)medalDetailController:(id)arg1 didPressTaskButtonWithMedal:(id)arg2;
- (void)showMedalDetailWithMedal:(id)arg1 listItemView:(id)arg2;
- (void)showMedalDetailWithRecentIssuedID;
- (void)medalCardCell:(id)arg1 didPressMedal:(id)arg2 withListItemView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)cachedDatas;
- (id)caches;
- (void)saveCaches:(id)arg1;
- (id)filePath;
- (id)folderPath;
- (void)viewDidAppear:(_Bool)arg1;
- (void)startLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)moduleID;
- (id)uiCode;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

