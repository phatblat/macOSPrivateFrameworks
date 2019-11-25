//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface TSTimeConverter : NSObject
{
    NSArray *_taiutc;
}

- (double)leapSecondForTAIDate:(id)arg1;
- (double)leapSecondForUTCDate:(id)arg1;
- (id)utcDateFromTAIDate:(id)arg1;
- (id)taiDateFromUTCDate:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithTAIUTCArray:(id)arg1;
- (id)init;

@end

