//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSInstaller/OSIInstallQueueElement.h>

@interface OSIConvertToCS : OSIInstallQueueElement
{
}

+ (BOOL)shouldConvertToCS:(id)arg1;
- (double)estimatedTimeToComplete;
- (id)operationName;
- (BOOL)runReturningError:(id *)arg1;

@end

