//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibraryPrivate/LiRidIter.h>

@interface LiRidAndIter : LiRidIter
{
    LiRidIter *_ridIter1;
    LiRidIter *_ridIter2;
}

+ (id)andRidIters:(id)arg1:(id)arg2;
- (void).cxx_destruct;
- (void)gotoRid:(unsigned long long)arg1;
- (void)gotoBegin;
- (BOOL)atEnd;
- (BOOL)nextRid:(unsigned long long *)arg1;
- (id)initWithRidIters:(id)arg1:(id)arg2;

@end

