//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/OADTextRun.h>

@class NSMutableString;

@interface OADRegularTextRun : OADTextRun
{
    NSMutableString *mText;
}

- (BOOL)isSimilarToTextRun:(id)arg1;
- (id)text;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)init;

@end

