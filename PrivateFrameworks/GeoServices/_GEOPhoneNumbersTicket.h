//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _GEOPhoneNumbersTicket : GEOAbstractMapServiceTicket
{
    NSArray *_phoneNumbers;
    BOOL _allowCellularDataForLookup;
}

- (void).cxx_destruct;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)description;
- (id)initWithPhoneNumbers:(id)arg1 allowCellularDataForLookup:(BOOL)arg2 traits:(id)arg3;

@end

