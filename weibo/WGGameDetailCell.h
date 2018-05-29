//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDWGCell.h"

@class NSIndexPath, UIImageView, WGGameDetailsModel;

@interface WGGameDetailCell : SDWGCell
{
    CDUnknownBlockType _operationBlock;
    WGGameDetailsModel *_model;
    NSIndexPath *_indexPath;
    WGGameDetailsModel *_detailsModel;
    UIImageView *_topLine;
    UIImageView *_bottomLine;
    UIImageView *_separator;
}

@property(retain, nonatomic) UIImageView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) WGGameDetailsModel *detailsModel; // @synthesize detailsModel=_detailsModel;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) WGGameDetailsModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
- (void).cxx_destruct;
- (void)setupLine;
- (void)didClickCell:(long long)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layout;
- (void)setup;
- (void)loadData;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 operationBlock:(CDUnknownBlockType)arg3;

@end

