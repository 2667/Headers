//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQFaceKeyBoard.h>

@class NSArray, UIImage;

@interface QQAIOMarioPanelView : QQFaceKeyBoard
{
    NSArray *_marioImages;
    struct CGRect _qqtextfieldFrame;
    UIImage *_cutImage;
    id _pannelController;
    double _currentMaxOffset;
    int _reportedIndex;
    _Bool _isLoading;
    _Bool _isLastPage;
}

@property _Bool isLastPage; // @synthesize isLastPage=_isLastPage;
@property _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id pannelController; // @synthesize pannelController=_pannelController;
@property(retain, nonatomic) UIImage *cutImage; // @synthesize cutImage=_cutImage;
@property(retain, nonatomic) NSArray *marioImages; // @synthesize marioImages=_marioImages;
@property struct CGRect qqtextfieldFrame; // @synthesize qqtextfieldFrame=_qqtextfieldFrame;
- (void).cxx_destruct;
- (void)showImageNum:(double)arg1;
- (void)willDismiss;
- (void)cancelDelayHidePanel;
- (void)delayHidePanel;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadFace;
- (void)reloadWithEmojis:(id)arg1 textfieldFrame:(struct CGRect)arg2;
- (id)initWithEmojis:(id)arg1 textfieldFrame:(struct CGRect)arg2;
- (unsigned long long)columnPerPage;

@end
