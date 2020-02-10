//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface IKBookmark : NSObject
{
    long long _bookmarkID;
    NSURL *_URL;
    NSString *_title;
    NSString *_descr;
    NSDate *_date;
    BOOL _starred;
    NSString *_privateSource;
    NSString *_hashString;
    double _progress;
    NSDate *_progressDate;
}

+ (id)bookmarkWithBookmarkID:(long long)arg1;
@property(retain, nonatomic) NSDate *progressDate; // @synthesize progressDate=_progressDate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(copy, nonatomic) NSString *privateSource; // @synthesize privateSource=_privateSource;
@property(nonatomic, getter=isStarred) BOOL starred; // @synthesize starred=_starred;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *descr; // @synthesize descr=_descr;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) long long bookmarkID; // @synthesize bookmarkID=_bookmarkID;
- (void)dealloc;
- (id)description;
- (id)initWithBookmarkID:(long long)arg1;
- (id)init;

@end
