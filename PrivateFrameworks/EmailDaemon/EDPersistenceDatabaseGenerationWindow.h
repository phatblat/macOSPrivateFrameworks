//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EDPersistenceDatabaseGenerationWindow : NSObject
{
    long long _earliestGeneration;
    long long _latestGeneration;
}

@property(readonly, nonatomic) long long latestGeneration; // @synthesize latestGeneration=_latestGeneration;
@property(readonly, nonatomic) long long earliestGeneration; // @synthesize earliestGeneration=_earliestGeneration;
- (void)insertGeneration:(long long)arg1;
- (id)init;

@end
