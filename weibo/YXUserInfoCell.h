//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, YXLiveLevelView, YXLiveUserView;

@interface YXUserInfoCell : UITableViewCell
{
    YXLiveUserView *_iconView;
    UILabel *_nickLabel;
    UILabel *_infoLabel;
    YXLiveLevelView *_gradeView;
}

@property(retain, nonatomic) YXLiveLevelView *gradeView; // @synthesize gradeView=_gradeView;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) YXLiveUserView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutViews;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

