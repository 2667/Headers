//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class WBPhotoTagModel;

@interface WBMultiImageTagView : UIButton
{
    _Bool isLeftMode_;
    WBPhotoTagModel *_tagModel;
}

@property(retain, nonatomic) WBPhotoTagModel *tagModel; // @synthesize tagModel=_tagModel;
- (void).cxx_destruct;
- (void)repositionInRect:(struct CGRect)arg1;
- (void)configRightTagBackground;
- (void)configLeftTagBackground;
- (void)updateTagTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

