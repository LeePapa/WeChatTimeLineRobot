/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol MMCommonAdapterDelegate;

@interface MMCommonAdapter : XXUnknownSuperclass {
	id<MMCommonAdapterDelegate> _m_delegate;
}
@property(assign) __weak id<MMCommonAdapterDelegate> m_delegate;
+(id)SharedInstance;
+(void)SetupWithDelegate:(id)delegate;
-(void).cxx_destruct;
@end
