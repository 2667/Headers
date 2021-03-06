//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QZVideoFloatingWindowDelegate-Protocol.h>

@class NSArray, NSMutableString, NSString, QZVideoFloatingWindow, QzoneFeedVideo;
@protocol QZVideoFloatingWindowDataSourceDelegate;

@interface QZVideoFloatingWindowMgr : NSObject <QZVideoFloatingWindowDelegate>
{
    double _continueTime;
    _Bool _beBeInterruptedPlay;
    long long _beginPlayVideoIndex;
    long long _curPlayVideoIndex;
    _Bool _isInAnimation;
    _Bool _isContinuePlayNextVideo;
    long long _fwVideoType;
    double _beginShowTime;
    double _beginPlayTime;
    long long _playSuccCount;
    long long _playErrCount;
    NSMutableString *_playErrCodeStr;
    QzoneFeedVideo *_feedOriVideo;
    _Bool _isShowing;
    QZVideoFloatingWindow *_floatingWindow;
    id <QZVideoFloatingWindowDataSourceDelegate> _dataSourceDelegate;
    NSArray *_videoList;
}

+ (id)instance;
@property(readonly, nonatomic) NSArray *videoList; // @synthesize videoList=_videoList;
@property(retain, nonatomic) id <QZVideoFloatingWindowDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(retain, nonatomic) QZVideoFloatingWindow *floatingWindow; // @synthesize floatingWindow=_floatingWindow;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

