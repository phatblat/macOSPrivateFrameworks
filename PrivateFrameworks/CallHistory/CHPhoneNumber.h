//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger
{
    BOOL _formatted;
    NSString *_originalPhoneNumber;
    NSString *_ISOCountryCode;
    NSString *_formattedPhoneNumber;
}

@property(copy) NSString *formattedPhoneNumber; // @synthesize formattedPhoneNumber=_formattedPhoneNumber;
@property BOOL formatted; // @synthesize formatted=_formatted;
@property(copy) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
@property(copy) NSString *originalPhoneNumber; // @synthesize originalPhoneNumber=_originalPhoneNumber;
- (void).cxx_destruct;
- (id)formattedNumber;
- (id)initWithPhoneNumber:(id)arg1 andISOCountryCode:(id)arg2;

@end

