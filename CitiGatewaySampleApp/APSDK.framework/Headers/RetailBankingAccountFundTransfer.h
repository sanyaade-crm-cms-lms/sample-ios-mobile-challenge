//
//  RetailBankingAccountFundTransfer.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingAccountFundTransfer
 @abstract RetailBankingAccountFundTransfer class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingAccountFundTransfer
 @abstract Generated model object: RetailBankingAccountFundTransfer.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingAccountFundTransfer(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingAccountFundTransfer/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingAccountFundTransfer : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingAccountFundTransfer.
 @result Class representing the data source associated with a RetailBankingAccountFundTransfer.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var amount
 @abstract Generated model property: amount.
 */
@property (nonatomic, strong) NSNumber * amount;

/*!
 @var currency
 @abstract Generated model property: currency.
 */
@property (nonatomic, strong) NSString * currency;

/*!
 @var destinationAccountId
 @abstract Generated model property: destination_account_id.
 */
@property (nonatomic, strong) NSString * destinationAccountId;

/*!
 @var destinationId
 @abstract Generated model property: destination_id.
 */
@property (nonatomic, strong) NSString * destinationId;

/*!
 @var memo
 @abstract Generated model property: memo.
 */
@property (nonatomic, strong) NSString * memo;

/*!
 @var payeeDesc
 @abstract Generated model property: payee_desc.
 */
@property (nonatomic, strong) NSString * payeeDesc;

/*!
 @var payeeId
 @abstract Generated model property: payee_id.
 */
@property (nonatomic, strong) NSString * payeeId;

/*!
 @var payeeType
 @abstract Generated model property: payee_type.
 */
@property (nonatomic, strong) NSString * payeeType;

/*!
 @var paymentType
 @abstract Generated model property: payment_type.
 */
@property (nonatomic, strong) NSNumber * paymentType;

/*!
 @var referenceNumber
 @abstract Generated model property: reference_number.
 */
@property (nonatomic, strong) NSString * referenceNumber;

/*!
 @var transactionDate
 @abstract Generated model property: transaction_date.
 */
@property (nonatomic, strong) NSString * transactionDate;

@end
