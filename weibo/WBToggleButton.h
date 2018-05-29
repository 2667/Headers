//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface WBToggleButton : UIButton
{
    _Bool _toggled;
    UIImage *_toggledImage;
    UIImage *_unToggledImage;
    UIImage *_toggledHighlightedImage;
    UIImage *_unToggledHighlightedImage;
}

+ (id)buttonWithToggledImage:(id)arg1 andUnToggledImage:(id)arg2;
@property(retain, nonatomic) UIImage *unToggledHighlightedImage; // @synthesize unToggledHighlightedImage=_unToggledHighlightedImage;
@property(retain, nonatomic) UIImage *toggledHighlightedImage; // @synthesize toggledHighlightedImage=_toggledHighlightedImage;
@property(retain, nonatomic) UIImage *unToggledImage; // @synthesize unToggledImage=_unToggledImage;
@property(retain, nonatomic) UIImage *toggledImage; // @synthesize toggledImage=_toggledImage;
@property(nonatomic) _Bool toggled; // @synthesize toggled=_toggled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)toggleAction;

@end

