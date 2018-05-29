//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTableViewController.h"

#import "AppSettingViewControllerDelegate-Protocol.h"
#import "WBDraftJobDelegate-Protocol.h"
#import "WBSkinning-Protocol.h"
#import "WBTabBarControllerDelegate-Protocol.h"

@class NSArray, NSString, WBCustomSwitchControl, WBProgressHUD;

@interface TabBarMoreItem : WBTableViewController <AppSettingViewControllerDelegate, WBDraftJobDelegate, WBSkinning, WBTabBarControllerDelegate>
{
    NSArray *sections;
    long long draftCount;
    WBProgressHUD *progressHUD;
    WBCustomSwitchControl *coverSkinSwitch;
    NSString *fileSize;
}

@property(retain, nonatomic) NSString *fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections;
- (void).cxx_destruct;
- (void)tabBarControllerDidSelect:(id)arg1;
- (void)draftJobChanged;
- (id)uiCode;
- (void)updateDraftCount;
- (void)eyeCareActionLog;
- (void)coverSkinAction:(id)arg1;
- (void)dealloc;
- (id)getLanguageSet;
- (void)openServiceCenterH5;
- (void)openShieldCenter;
- (void)openAccountSecurity;
- (long long)checkAllFolderSize:(_Bool)arg1;
- (void)delImageDirectoryEnd;
- (void)delImageDirectory;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)doAccountDelete;
- (void)logoutCurrentAccount;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)reSetMuLanguageSet;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)skinListDidUpdateNotification:(id)arg1;
- (void)currentSkinDidChangeNotification:(id)arg1;
- (void)reloadUIElements;
- (void)reloadTabBarItem;
- (void)resetBadgeValue;
- (void)reloadSections;
- (void)currentAccountDidChange:(id)arg1;
- (void)debugModeDidChangeNotification:(id)arg1;
- (void)didAppLanguageChanged:(id)arg1;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(struct NSMutableDictionary *)arg2;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

