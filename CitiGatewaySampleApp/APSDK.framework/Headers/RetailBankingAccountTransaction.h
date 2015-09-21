//
//  RetailBankingAccountTransaction.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingAccountTransaction
 @abstract RetailBankingAccountTransaction class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingAccountTransaction
 @abstract Generated model object: RetailBankingAccountTransaction.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingAccountTransaction(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingAccountTransaction/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingAccountTransaction : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingAccountTransaction.
 @result Class representing the data source associated with a RetailBankingAccountTransaction.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var accountId
 @abstract Generated model property: account_id.
 */
@property (nonatomic, strong) NSString * accountId;

/*!
 @var activity
 @abstract Generated model property: activity.
 */
@property (nonatomic, strong) NSString * activity;

/*!
 @var checkImageEligible
 @abstract Generated model property: check_image_eligible.
 */
@property (nonatomic, strong) NSString * checkImageEligible;

/*!
 @var datePosted
 @abstract Generated model property: date_posted.
 */
@property (nonatomic, strong) NSString * datePosted;

/*!
 @var formattedAmount
 @abstract Generated model property: formatted_amount.
 */
@property (nonatomic, strong) NSString * formattedAmount;

/*!
 @var pendingDate
 @abstract Generated model property: pending_date.
 */
@property (nonatomic, strong) NSString * pendingDate;

/*!
 @var transactionAmount
 @abstract Generated model property: transaction_amount.
 */
@property (nonatomic, strong) NSNumber * transactionAmount;

/*!
 @var transactionDescription
 @abstract Generated model property: transaction_description.
 */
@property (nonatomic, strong) NSString * transactionDescription;

/*!
 @var transactionIdentifier
 @abstract Generated model property: transaction_identifier.
 */
@property (nonatomic, strong) NSString * transactionIdentifier;

/*!
 @var transactionIndex
 @abstract Generated model property: transaction_index.
 */
@property (nonatomic, strong) NSString * transactionIndex;

/*!
 @var transactionType
 @abstract Generated model property: transaction_type.
 */
@property (nonatomic, strong) NSString * transactionType;

@end
