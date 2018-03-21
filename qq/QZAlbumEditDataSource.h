//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/UITableViewDataSource-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>
#import <QQMainProject/UITextViewDelegate-Protocol.h>

@class NSArray, NSMutableString, NSString, QZAlbumEditStore, QZAlbumEditViewController, UIImage;

@interface QZAlbumEditDataSource : NSObject <UITextViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _themePanelShouldOpen;
    _Bool _shouldShowNew;
    NSArray *_sectionTitles;
    NSArray *_shareParentList;
    UIImage *_coverImage;
    long long _originAlbumType;
    QZAlbumEditViewController *_controller;
    QZAlbumEditStore *_store;
    NSMutableString *_editingString;
}

@property(retain, nonatomic) NSMutableString *editingString; // @synthesize editingString=_editingString;
@property(retain, nonatomic) QZAlbumEditStore *store; // @synthesize store=_store;
@property(nonatomic) __weak QZAlbumEditViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) long long originAlbumType; // @synthesize originAlbumType=_originAlbumType;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) _Bool shouldShowNew; // @synthesize shouldShowNew=_shouldShowNew;
@property(retain, nonatomic) NSArray *shareParentList; // @synthesize shareParentList=_shareParentList;
@property(nonatomic) _Bool themePanelShouldOpen; // @synthesize themePanelShouldOpen=_themePanelShouldOpen;
@property(copy, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
