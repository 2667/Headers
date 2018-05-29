//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWELiveSilenceStatusModel, UIButton, UIImageView, UILabel, UIView;

@interface AWELiveSilenceListTableViewCell : UITableViewCell
{
    AWELiveSilenceStatusModel *_silenceModel;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UIButton *_silenceBtn;
    UIView *_separateView;
}

+ (id)_defaultImage;
+ (id)identifier;
@property(retain, nonatomic) UIView *separateView; // @synthesize separateView=_separateView;
@property(retain, nonatomic) UIButton *silenceBtn; // @synthesize silenceBtn=_silenceBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) AWELiveSilenceStatusModel *silenceModel; // @synthesize silenceModel=_silenceModel;
- (void).cxx_destruct;
- (id)transformStoryDate:(double)arg1;
- (id)timeDescWithDate:(double)arg1;
- (void)silenceBtnTapped:(id)arg1;
- (void)userTapped:(id)arg1;
- (void)_refreshSilenceButtonUI:(_Bool)arg1;
- (void)_setupUI;
- (void)layoutSubviews;
- (void)configWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

