//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView, UILabel, YXMyAwardDayTaskLookSonModel;

@interface YXMyAwardDayTaskLookSonOtherButton : UIButton
{
    YXMyAwardDayTaskLookSonModel *_sonModel;
    UIImageView *_arrowsImageView;
    UIImageView *_iconImageView;
    UIImageView *_progress_backView;
    UILabel *_progressLabel_backgroundColor;
    UILabel *_progressLabel;
}

@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *progressLabel_backgroundColor; // @synthesize progressLabel_backgroundColor=_progressLabel_backgroundColor;
@property(retain, nonatomic) UIImageView *progress_backView; // @synthesize progress_backView=_progress_backView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *arrowsImageView; // @synthesize arrowsImageView=_arrowsImageView;
@property(retain, nonatomic) YXMyAwardDayTaskLookSonModel *sonModel; // @synthesize sonModel=_sonModel;
- (void).cxx_destruct;
- (void)setupViewWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withModel:(id)arg2;

@end

