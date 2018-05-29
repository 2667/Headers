//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBStaticImageCropperViewController.h"

@class UIImageView, UILabel, UIView;

@interface WBNLImageEditViewController : WBStaticImageCropperViewController
{
    UIView *_cropOverlayView;
    UILabel *_message;
    UIImageView *_line;
    struct CGRect _cropFrame1;
}

@property(nonatomic) struct CGRect cropFrame1; // @synthesize cropFrame1=_cropFrame1;
@property(retain, nonatomic) UIImageView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
@property(retain, nonatomic) UIView *cropOverlayView; // @synthesize cropOverlayView=_cropOverlayView;
- (void).cxx_destruct;
- (struct CGRect)handleBorderOverflow:(struct CGRect)arg1;
- (void)resetOverlayStyle;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

