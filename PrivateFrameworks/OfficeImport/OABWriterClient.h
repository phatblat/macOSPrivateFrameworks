//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface OABWriterClient : NSObject
{
}

- (unsigned short)eshSchemeColorIndexForOADSchemeColorValue:(int)arg1 state:(id)arg2;
- (void)writeClientDataFromTableCell:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientTextFromShape:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientDataFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;
- (void)writeClientAnchorFromDrawable:(id)arg1 toObject:(id)arg2 state:(id)arg3;

@end

