//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBViewController.h"

@class NSDictionary, WBAutoGroupTableViewController, WBLabel, WBProgressHUD, WBStyleButton;
@protocol WBAutoGroupViewControllerDelegate;

@interface WBAutoGroupViewController : WBViewController
{
    _Bool isSchemeOpen;
    int selectionCount;
    WBLabel *detailLabel;
    WBStyleButton *finishBtn;
    WBAutoGroupTableViewController *_mTableViewController;
    long long groupStyle;
    WBProgressHUD *progressHUD;
    id <WBAutoGroupViewControllerDelegate> _delegate;
    NSDictionary *_dataDict;
}

@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(nonatomic) id <WBAutoGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishButtonTapped:(id)arg1;
- (void)dismissPresent;
- (void)delayDismiss;
- (void)updateDetailLabel;
- (void)dealloc;
- (void)presetData;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)fetchData;
- (id)generateWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;
- (id)initWithOpenUrlLink:(id)arg1 inAppParas:(id)arg2;

@end

