//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface WBSSiriIntelligenceDonorHistoryData : NSObject
{
    NSURL *_pageURL;
    NSString *_userVisibleURLString;
    NSString *_pageTitle;
    NSString *_fullPageText;
    NSString *_readerText;
    NSDate *_lastVisitedDate;
    unsigned long long _visitCount;
}

@property(nonatomic) unsigned long long visitCount; // @synthesize visitCount=_visitCount;
@property(copy, nonatomic) NSDate *lastVisitedDate; // @synthesize lastVisitedDate=_lastVisitedDate;
@property(copy, nonatomic) NSString *readerText; // @synthesize readerText=_readerText;
@property(copy, nonatomic) NSString *fullPageText; // @synthesize fullPageText=_fullPageText;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(copy, nonatomic) NSString *userVisibleURLString; // @synthesize userVisibleURLString=_userVisibleURLString;
@property(copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
- (void).cxx_destruct;

@end

