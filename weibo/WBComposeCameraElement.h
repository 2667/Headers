//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBComposeImagesElement.h"

#import "WBComposeCameraElementViewDelegate-Protocol.h"
#import "WBImageEditorCacheManagerDelegate-Protocol.h"

@class NSString, UIImage;

@interface WBComposeCameraElement : WBComposeImagesElement <WBComposeCameraElementViewDelegate, WBImageEditorCacheManagerDelegate>
{
    _Bool _isDraft;
    long long _showingDays;
    long long _steps;
    UIImage *_markInfoImage;
}

@property(nonatomic) _Bool isDraft; // @synthesize isDraft=_isDraft;
@property(retain, nonatomic) UIImage *markInfoImage; // @synthesize markInfoImage=_markInfoImage;
@property(nonatomic) long long steps; // @synthesize steps=_steps;
@property(nonatomic) long long showingDays; // @synthesize showingDays=_showingDays;
- (void).cxx_destruct;
- (id)composeCornerImageForElementView:(id)arg1;
- (id)composeCornerTextForElementView:(id)arg1;
- (void)composeCameraButtonPressed:(id)arg1 elementView:(id)arg2;
- (void)viewDidLoad;
- (Class)viewClass;
- (void)saveComposeDataToJob:(id)arg1;
- (void)setupWithJob:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

