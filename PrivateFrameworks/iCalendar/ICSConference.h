//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSConference : ICSProperty
{
}

@property(retain, nonatomic) NSString *region;
@property(retain, nonatomic) NSString *language;
@property(retain, nonatomic) NSString *info;
@property(retain, nonatomic) NSString *feature;
- (id)initWithValue:(id)arg1 type:(unsigned long long)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

