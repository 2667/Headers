//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface WBPageHeaderBackgroundView : UIView
{
    UIImageView *logoView;
    UIImage *backgroundImage;
    _Bool _hasCover;
    _Bool _hasShadow;
}

@property(nonatomic) _Bool hasShadow; // @synthesize hasShadow=_hasShadow;
@property(nonatomic) _Bool hasCover; // @synthesize hasCover=_hasCover;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

