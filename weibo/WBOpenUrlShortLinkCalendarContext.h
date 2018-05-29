//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBOpenUrlContextBase.h"

@class NSDictionary, WBCalendarEvent, WBShortLinkCalendarFailViewController, WBShortLinkCalendarSuccessView;

@interface WBOpenUrlShortLinkCalendarContext : WBOpenUrlContextBase
{
    struct CGRect originRect;
    NSDictionary *calendarDict;
    WBCalendarEvent *calendarEvent;
    WBShortLinkCalendarFailViewController *_orderFailViewController;
    WBShortLinkCalendarSuccessView *_orderSuccessView;
}

@property(retain, nonatomic) WBShortLinkCalendarSuccessView *orderSuccessView; // @synthesize orderSuccessView=_orderSuccessView;
@property(retain, nonatomic) WBShortLinkCalendarFailViewController *orderFailViewController; // @synthesize orderFailViewController=_orderFailViewController;
- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (void)cancelCalendar;
- (void)orderCalendar;
- (void)showSuccessView;
- (void)showFailView;
- (void)startContext;

@end

