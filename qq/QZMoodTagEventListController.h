//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZoneViewController.h>

#import <QQMainProject/QZHorizontalTableCellDelegate-Protocol.h>
#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSArray, NSString, QZHorizontalTableCell, QZTagTableView, UIButton, UITextField;
@protocol QZMoodTagEventListControllerDelegate;

@interface QZMoodTagEventListController : QZoneViewController <UITableViewDataSource, UITableViewDelegate, QZHorizontalTableCellDelegate, UITextFieldDelegate>
{
    QZTagTableView *_tableView;
    QZHorizontalTableCell *_horTableCell;
    NSArray *_recommTagList;
    NSArray *_historyTagList;
    NSArray *_searchTagList;
    UITextField *_search;
    UIButton *_searchClear;
    id <QZMoodTagEventListControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <QZMoodTagEventListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
