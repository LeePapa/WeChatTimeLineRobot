/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSMutableArray;
@protocol UploadAttachmentDataDelegate;

@interface UploadAttachmentDataHelper : MMObject <PBMessageObserverDelegate> {
	NSMutableArray* m_uploadAttachmentQueue;
	BOOL m_bIsUploading;
	id<UploadAttachmentDataDelegate> m_delegate;
}
@property(assign, nonatomic) __weak id<UploadAttachmentDataDelegate> m_delegate;
-(void).cxx_destruct;
-(void)dealloc;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)popQueue;
-(BOOL)uploadAttachment;
-(void)cancelUpload:(id)upload fileName:(id)name;
-(void)startUploadAttachment:(id)attachment fileName:(id)name;
-(void)removeAttachmentTempFile:(id)file;
-(BOOL)createAttachmentTempFile:(id)file data:(id)data;
-(id)getLocalPathWithClientID:(id)clientID;
-(id)getFileNameWithClientID:(id)clientID;
-(id)getClientID;
-(id)getAttachmentTempPath:(id)path;
-(id)init;
@end

