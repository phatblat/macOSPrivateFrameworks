//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CalDelegateHandler : NSObject
{
}

+ (BOOL)_updateGrantedDelegatesListWithAdd:(id)arg1 remove:(id)arg2 forCalDAVAccount:(id)arg3 withError:(id *)arg4;
+ (id)_getGrantedDelegateListForCalDAVAccount:(id)arg1 allowExpand:(BOOL)arg2 error:(id *)arg3;
+ (BOOL)parseResponse:(id)arg1 error:(id *)arg2;
+ (BOOL)toggleAllowWriteForGrantedDelegate:(id)arg1 toAccount:(id)arg2 withError:(id *)arg3;
+ (BOOL)removeGrantedDelegate:(id)arg1 toAccount:(id)arg2 withError:(id *)arg3;
+ (BOOL)addGrantedDelegate:(id)arg1 toAccount:(id)arg2 withError:(id *)arg3;
+ (id)getGrantedDelegateListForAccount:(id)arg1 withError:(id *)arg2;
+ (BOOL)removeDelegate:(id)arg1 fromAccount:(id)arg2 withError:(id *)arg3;
+ (BOOL)addDelegate:(id)arg1 toAccount:(id)arg2 withError:(id *)arg3;
+ (void)refreshDelegateListForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

