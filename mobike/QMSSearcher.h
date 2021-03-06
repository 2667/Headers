//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QMSHTTPRequestOperationManager;
@protocol QMSSearchDelegate;

@interface QMSSearcher : NSObject
{
    id <QMSSearchDelegate> _delegate;
    QMSHTTPRequestOperationManager *_httpRequestManager;
}

@property(retain, nonatomic) QMSHTTPRequestOperationManager *httpRequestManager; // @synthesize httpRequestManager=_httpRequestManager;
@property(nonatomic) __weak id <QMSSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)propertiesFromSearchOption:(id)arg1;
- (id)dictionaryFromSearchOption:(id)arg1;
- (void)notifySearchOption:(id)arg1 error:(id)arg2;
- (id)searchWithBusingRouteSearchOption:(id)arg1;
- (id)searchWithDrivingRouteSearchOption:(id)arg1;
- (id)searchWithWalkingRouteSearchOption:(id)arg1;
- (id)searchWithGeoCodeSearchOption:(id)arg1;
- (id)searchWithReverseGeoCodeSearchOption:(id)arg1;
- (id)searchWithSuggestionSearchOption:(id)arg1;
- (id)searchWithPoiSearchOption:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end

