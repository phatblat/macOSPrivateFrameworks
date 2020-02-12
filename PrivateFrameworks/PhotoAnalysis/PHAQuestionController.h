//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_os_log>, PGManager, PHFetchResult;

@interface PHAQuestionController : NSObject
{
    PGManager *_graphManager;
    NSObject<OS_os_log> *_loggingConnection;
    PHFetchResult *_persons;
}

@property(retain, nonatomic) PHFetchResult *persons; // @synthesize persons=_persons;
@property(retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(retain, nonatomic) PGManager *graphManager; // @synthesize graphManager=_graphManager;
- (void).cxx_destruct;
- (id)_stringForQuestionType:(long long)arg1;
- (id)_factoryForType:(long long)arg1 manager:(id)arg2;
- (id)existingQuestionsForType:(long long)arg1;
- (BOOL)generateQuestionsWithType:(long long)arg1 limit:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3;
- (id)initWithGraphManager:(id)arg1;

@end

