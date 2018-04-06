//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber;

@interface IMMessageNotificationTimer : NSObject
{
    NSDate *_date;
    NSNumber *_numberDingsLeft;
}

@property(readonly, nonatomic) NSNumber *numberDingsLeft; // @synthesize numberDingsLeft=_numberDingsLeft;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)reduceNumberDingsLeft;
@property(readonly, nonatomic) BOOL areDingsRemaining;
- (void)dealloc;
- (id)initWithDate:(id)arg1;

@end
