//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YXTrueLoveBaseModule.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UITableView, UIView, YXTrueLoveIntimateTasksModel;

@interface YXTrueLoveIntimateTasksModule : YXTrueLoveBaseModule <UITableViewDelegate, UITableViewDataSource>
{
    YXTrueLoveIntimateTasksModel *dataModel;
    CDUnknownBlockType _tapComment;
    CDUnknownBlockType _tapShare;
    CDUnknownBlockType _tapGift;
    CDUnknownBlockType _tapCharge;
    UITableView *_tableview;
    NSMutableArray *_dataArray;
    UIView *_lineView;
    UILabel *_intimateTasksLable;
}

@property(retain, nonatomic) UILabel *intimateTasksLable; // @synthesize intimateTasksLable=_intimateTasksLable;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(copy, nonatomic) CDUnknownBlockType tapCharge; // @synthesize tapCharge=_tapCharge;
@property(copy, nonatomic) CDUnknownBlockType tapGift; // @synthesize tapGift=_tapGift;
@property(copy, nonatomic) CDUnknownBlockType tapShare; // @synthesize tapShare=_tapShare;
@property(copy, nonatomic) CDUnknownBlockType tapComment; // @synthesize tapComment=_tapComment;
- (void).cxx_destruct;
- (void)handoutEvent:(long long)arg1;
- (double)height;
- (void)setData:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshViewData;
- (void)initView;
- (id)initWithWidth:(double)arg1 type:(long long)arg2 container:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

