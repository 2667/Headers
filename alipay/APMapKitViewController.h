//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseViewController.h"

@class APFoursquareAnnotation, APMapKitView, NSDictionary;

@interface APMapKitViewController : DTBaseViewController
{
    NSDictionary *_launchOptions;
    APMapKitView *_mapkit;
    APFoursquareAnnotation *_foursquareAnnotation;
}

@property(retain, nonatomic) APFoursquareAnnotation *foursquareAnnotation; // @synthesize foursquareAnnotation=_foursquareAnnotation;
@property(retain, nonatomic) APMapKitView *mapkit; // @synthesize mapkit=_mapkit;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
